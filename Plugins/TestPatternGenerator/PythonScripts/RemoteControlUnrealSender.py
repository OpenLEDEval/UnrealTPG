import requests, sys, json

UNREAL_REMOTE_CONTROL_URL = "http://localhost:30010/remote/preset/RCP_Test/property/"

def change_color(R, G, B):
    payload = json.dumps({
        "PropertyValue": {
        "R": float(R),
        "G": float(G),
        "B": float(B)
        },
        "GenerateTransaction": True
    })
    headers = {
    'Content-Type': 'application/json',
    }

    response = requests.request("PUT", UNREAL_REMOTE_CONTROL_URL + "Color", headers=headers, data=payload)
    
if __name__ == '__main__':
    R = sys.argv[1]
    G = sys.argv[2]
    B = sys.argv[3]
    change_color(R, G, B)
    