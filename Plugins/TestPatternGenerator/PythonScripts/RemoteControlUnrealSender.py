import requests, sys, json

UNREAL_REMOTE_CONTROL_URL = "http://localhost:30010/remote/preset/RCP_Test"

def change_color(R, G, B, A):
    payload = json.dumps({
        "Parameters": {
            "InColor": {
            "R": float(R),
            "G": float(G),
            "B": float(B),
            "A": float(A)
            }
        },
        "GenerateTransaction": True
    })
    headers = {
    'Content-Type': 'application/json',
    }

    response = requests.request("PUT", UNREAL_REMOTE_CONTROL_URL + "/function/UpdatePPVColor", headers=headers, data=payload)
    print(UNREAL_REMOTE_CONTROL_URL + "function/UpdatePPVColor")
    print(response.status_code)
    
if __name__ == '__main__':
    R = sys.argv[1]
    G = sys.argv[2]
    B = sys.argv[3]
    A = sys.argv[4]
    change_color(R, G, B, A)
    