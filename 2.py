from random import choice as cc
list = []
for i in range(0,10):
    temp = "输入第" + str(i + 1) +"位同学的姓名："
    list.append(input(temp))
print(list)
print('\n')
print(cc(list)+"获奖")
