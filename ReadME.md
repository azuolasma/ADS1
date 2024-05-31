# Prioritetinės Eilės Realizacija

Prioritetinės eilės realizacija naudojant dinaminius masyvus.  
Daroma prielaida, kad mažesnės reikšmės turi didesnį prioritetą.

## Failai

- **Go.cmd** - automatizuoja testavimą (t.y. nueina į direktoriją, priklausant nuo kompiuterio, ir paleidžia "make")
- **Makefile** - kompiliuoja ir suriša failus testavimui
- **LFF** - laiko fiksavimo forma
- **priority_queue.c** - prioritetinės eilės realizacija
- **priority_queue.h** - prioritetinės eilės interfeisas
- **test.c** - failas testavimui, automatiškai paleidžiamas paleidus Go.cmd failą


# Priority Queue Library in C

This library provides an implementation of a priority queue in C with basic functionality such as enqueue, dequeue, and peek operations. The priority queue prioritizes lower numerical values as higher priority.

## Features

- **Initialization with specified capacity**: Create a priority queue with a set initial capacity.
- **Enqueue and Dequeue operations**: Add elements with priorities and remove the element with the highest priority.
- **Peek operation**: View the highest priority element without removing it from the queue.
- **Empty and Full checks**: Easily check whether the priority queue is empty or full.
- **Dynamic memory management**: Automatically handles memory for dynamic growth of the priority queue.
