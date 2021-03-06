#           Q1-3. 階段ののぼり方
# ----------------------------------------
# 問題
# https://algo-method.com/tasks/304

# フィボナッチに帰着

# AC
# ----------------------------------------

N = int(input())

DP = [0] * (N + 1)
DP[0] = 1  # 最初も1通りと考える
DP[1] = 1

for i in range(2, N+1):
    DP[i] = DP[i-1] + DP[i-2]

print(DP[-1])