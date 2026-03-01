from typing import List

def process_server_logs(logs:list[str]) -> None:
    print(f"Starting annaylisis lenth of logs is:{len(logs)}")

    for log in logs:
        # 1. CONTINUE:Guard Clause
        # If the log is empty, skip this round immediately.
        if len(log) == 0:
            continue  #If string lenth is empty "" i.e "0" skip

        # 2. BREAK: Early Exit
        # If we hit a critical error, stop everything.
        if log == "CRITICAL FAILURE":
            print("!ALERT: Critical Failure Detected. Stopping analysis.!")
            break

        #Normal processing
        print(f"Logged:{log}")

        # 3. PASS: Placeholder
        # We know we need to save this to a database later, but not today.
        if "User" in log:
            save_to_database(log)

def save_to_database(data:str):
    # TODO : Implement SQL connection later
    pass

if __name__ == "__main__":

    # -- Running the code --
    server_data = ["User A login","","User B login", "CRITICAL FAILURE", "User C login"]
    process_server_logs(server_data)



