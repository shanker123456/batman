
import socket

MAX = 80
PORT = 8080

def func(conn):
    while True:
        data = conn.recv(MAX).decode('utf-8')
        print(f"From client: {data}\t To client: ", end='')
        message = input()
        conn.send(message.encode('utf-8'))
        if message == "exit":
            print("Server Exit...")
            break

def main():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    print("Socket successfully created..")

    s.bind(('', PORT))
    print("Socket successfully binded..")

    s.listen(5)
    print("Server listening..")

    conn, addr = s.accept()
    print(f"Server accepted the client {addr}")

    func(conn)
    conn.close()

if __name__ == "__main__":
    main()


