import socket

def func(client_socket):
    while True:
        message = input("Enter the string: ")
        client_socket.send(message.encode('utf-8'))

        if message.lower() == 'exit':
            print("Client Exit...")
            break

        data = client_socket.recv(1024).decode('utf-8')
        print(f"From Server: {data}")

def main():
    host = '127.0.0.1'  # Server IP address
    port = 8080         # Server port

    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    client_socket.connect((host, port))

    print("Connected to the server..")
    func(client_socket)

    client_socket.close()

if __name__ == "__main__":
    main()
