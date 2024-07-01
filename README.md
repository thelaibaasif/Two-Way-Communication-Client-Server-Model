# Two-Way Communication Client-Server Model

## Description
This project implements a two-way communication client-server model in C. Upon establishing a connection, the server sends a greeting message, "Hi, you have connected to the server!" to the client. The client sends a string to the server, which then reverses the string and sends it back. The client displays the received reversed string.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)
- [Usage](#usage)
  - [Server Side](#server-side)
  - [Client Side](#client-side)
- [Implementation Details](#implementation-details)
- [Conclusion](#conclusion)
- [License](#license)

## Introduction
This project demonstrates a simple two-way communication between a client and a server using socket programming in C. The server sends a welcome message upon connection, and the client can send a string to be reversed by the server.

## Features
- Two-way communication between client and server
- Server sends a welcome message upon connection
- Client sends a string to the server, which reverses and sends it back

## Requirements
- GCC compiler for C
- Basic understanding of socket programming
- Basic understanding of C programming

## Usage

### Server Side
1. Compile the server code:
    ```sh
    gcc -o server server.c
    ```
2. Run the server:
    ```sh
    ./server
    ```

### Client Side
1. Compile the client code:
    ```sh
    gcc -o client client.c
    ```
2. Run the client:
    ```sh
    ./client
    ```

## Implementation Details
### Server Code
The server listens for incoming connections. Upon connection, it sends a welcome message to the client. It then waits for a string from the client, reverses it, and sends the reversed string back.

### Client Code
The client connects to the server, receives the welcome message, and displays it. It then sends a string to the server, waits for the reversed string, and displays it.

### Example Usage
**Client Side:**
```sh
Received: Hi, you have connected to the server!
Enter a string: example
Received reversed string: elpmaxe
