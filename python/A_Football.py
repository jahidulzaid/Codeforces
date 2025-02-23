# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid


n = int(input())
scores = {}

for _ in range(n):
    team = input()
    if team in scores:
        scores[team] += 1
    else:
        scores[team] = 1

winning_team = None
max_goals = 0

for team, goals in scores.items():
    if goals > max_goals:
        max_goals = goals
        winning_team = team
print(winning_team)
