while True:
    try:
        t = input()
    except EOFError:
        print("NO")
        break
    print("NO",flush=True)