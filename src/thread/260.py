import threading
def f1():
    for i in range(10000):
        print(i,"__111")

th1 = threading.Thread(target=f1)
th1.start();
th1.join()
for i in range(10000):
  print(i, "__main")
