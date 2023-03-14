#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define the song struct
struct Song
{
    char title[100];
    int length;
};

// define the queue struct
struct Queue
{
    struct Song *songs;
    int front, rear, size, capacity;
};

// create a new queue with the given capacity
struct Queue *createQueue(int capacity)
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->songs = (struct Song *)malloc(capacity * sizeof(struct Song));
    queue->front = queue->size = 0;
    queue->rear = -1;
    queue->capacity = capacity;
    return queue;
}

// check if the queue is empty
int isEmpty(struct Queue *queue)
{
    return (queue->size == 0);
}

// check if the queue is full
int isFull(struct Queue *queue)
{
    return (queue->size == queue->capacity);
}

// add a new song to the queue
void enqueue(struct Queue *queue, struct Song song)
{
    if (isFull(queue))
    {
        printf("Queue is full, cannot add song.\n");
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->songs[queue->rear] = song;
    queue->size++;
    printf("Song '%s' added to queue.\n", song.title);
}

// remove the next song from the queue
struct Song dequeue(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty, cannot dequeue song.\n");
        struct Song emptySong = {"", 0};
        return emptySong;
    }
    struct Song song = queue->songs[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    printf("Song '%s' removed from queue.\n", song.title);
    return song;
}

// display the current queue of songs
void displayQueue(struct Queue *queue)
{
    printf("Current queue of songs:\n");
    if (isEmpty(queue))
    {
        printf("Queue is empty.\n");
        return;
    }
    for (int i = 0; i < queue->size; i++)
    {
        int index = (queue->front + i) % queue->capacity;
        printf("%d. '%s' (%d seconds)\n", i + 1, queue->songs[index].title, queue->songs[index].length);
    }
}

int main()
{
    // create a queue with capacity for 5 songs
    struct Queue *queue = createQueue(5);

    // add some songs to the queue
    struct Song song1 = {"Bohemian Rhapsody", 367};
    enqueue(queue, song1);
    struct Song song2 = {"Stairway to Heaven", 482};
    enqueue(queue, song2);
    struct Song song3 = {"Hotel California", 390};
    enqueue(queue, song3);

    // display the current queue
    displayQueue(queue);

    // dequeue the next song from the queue
    struct Song nextSong = dequeue(queue);
    printf("Next song to play: '%s' (%d seconds)\n", nextSong.title, nextSong.length);

    // display the current queue again
    displayQueue(queue);

    // add another song to the queue
    struct Song song4 = {"Sweet Child O' Mine", 356};
    enqueue(queue, song4);
    struct Song song5 = {"Thunderstruck", 292};
    enqueue(queue, song5);

    // display the final queue
    displayQueue(queue);

    // free memory allocated for the queue
    free(queue->songs);
    free(queue);

    return 0;
}
