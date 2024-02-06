import pyttsx3
import speech_recognition as sr
import datetime
import os

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
print(voices[0].id)
engine.setProperty('voice', voices[0].id)

# Text to speech
def speak(audio):
    engine.say(audio)
    print(audio)
    engine.runAndWait()

# To convert voice into text
def takeCommand():
    r = sr.Recognizer()

    # Get the list of available microphones
    mic_list = sr.Microphone.list_microphone_names()

    # Select the desired microphone by index (change the index accordingly)
    selected_microphone_index = 0

    with sr.Microphone(device_index=selected_microphone_index) as source:
        print(f"Using microphone: {mic_list[selected_microphone_index]}")
        print("Listening...")
        r.pause_threshold = 1
        try:
            audio = r.listen(source, timeout=5, phrase_time_limit=20)
            print("Recognizing...")

            # Use recognize_google method (without API key)
            query = r.recognize_google(audio)
            
            print(f"user said: {query}")
            return query.lower()
        except sr.UnknownValueError:
            print("Google Speech Recognition could not understand audio")
        except sr.RequestError as e:
            print(f"Google Speech Recognition error; {e}")
        except Exception as e:
            print(f"Error: {e}")

        speak("Say that again please...")
        return "none"

# To wish
def wish():
    hour = int(datetime.datetime.now().hour)

    if 0 <= hour < 12:
        speak("good morning")
    elif 12 <= hour < 18:
        speak("good afternoon")
    else:
        speak("good evening")

    speak("I am Jarvis, sir. Please tell me how can I help you?")


if __name__ == "__main__":
    wish()
    while True:
        query = takeCommand().lower()

        # Logic building for tasks
        if "open notepad" in query:
            path = "C:\\WINDOWS\\system32\\notepad.exe"
            os.startfile(path)
        elif "hello" in query:
            speak("Hello Sir.  Please tell me how can I help you?")
       
