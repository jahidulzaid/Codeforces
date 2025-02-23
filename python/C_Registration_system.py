def registration_system(n, requests):
    usernames = {}
    results = []
    
    for name in requests:
        if name not in usernames:
            usernames[name] = 0
            results.append("OK")
        else:
            usernames[name] += 1
            new_name = f"{name}{usernames[name]}"
            usernames[new_name] = 0
            results.append(new_name)
    
    return results

n = int(input())
requests = [input() for _ in range(n)]

output = registration_system(n, requests)
print("\n".join(output))
