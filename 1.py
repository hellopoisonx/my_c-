import random as rd
list = []
for i in range(0,11):
    list.append(input("请输入"))
print("恭喜 ",rd.choice(list),"中奖")