import pyaudio

def list_microphones():
    p = pyaudio.PyAudio()
    info = p.get_host_api_info_by_index(0)
    numdevices = info.get('deviceCount')

    print("Available microphones:")

    for i in range(0, numdevices):
        device_info = p.get_device_info_by_host_api_device_index(0, i)
        if device_info['maxInputChannels'] > 0:
            print(f"Microphone {i}: {device_info['name']}")

    p.terminate()

if __name__ == "__main__":
    list_microphones()
