/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:50:42 by boiarinov         #+#    #+#             */
/*   Updated: 2023/09/27 22:06:46 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

// Define the stacks and their top indices
int stack_a[MAX_STACK_SIZE];
int stack_b[MAX_STACK_SIZE];
int top_a = -1;
int top_b = -1;

// Function to push an element onto stack a
void pa(int value) {
    if (top_a < MAX_STACK_SIZE - 1) {
        stack_a[++top_a] = value;
    } else {
        printf("Stack A is full\n");
        exit(1);
    }
}

// Function to push an element onto stack b
void pb(int value) {
    if (top_b < MAX_STACK_SIZE - 1) {
        stack_b[++top_b] = value;
    } else {
        printf("Stack B is full\n");
        exit(1);
    }
}

// Function to swap the top two elements of stack a
void sa() {
    if (top_a >= 1) {
        int temp = stack_a[top_a];
        stack_a[top_a] = stack_a[top_a - 1];
        stack_a[top_a - 1] = temp;
    }
}

// Function to swap the top two elements of stack b
void sb() {
    if (top_b >= 1) {
        int temp = stack_b[top_b];
        stack_b[top_b] = stack_b[top_b - 1];
        stack_b[top_b - 1] = temp;
    }
}

// Function to push the top element of stack b onto stack a
void pa() {
    if (top_b >= 0) {
        push_a(stack_b[top_b]);
        top_b--;
    }
}

// Function to push the top element of stack a onto stack b
void pb() {
    if (top_a >= 0) {
        push_b(stack_a[top_a]);
        top_a--;
    }
}

// Function to rotate stack a
void ra() {
    if (top_a >= 1) {
        int temp = stack_a[top_a];
        for (int i = top_a; i > 0; i--) {
            stack_a[i] = stack_a[i - 1];
        }
        stack_a[0] = temp;
    }
}

// Function to rotate stack b
void rb() {
    if (top_b >= 1) {
        int temp = stack_b[top_b];
        for (int i = top_b; i > 0; i--) {
            stack_b[i] = stack_b[i - 1];
        }
        stack_b[0] = temp;
    }
}

// Function to reverse rotate stack a
void rra() {
    if (top_a >= 1) {
        int temp = stack_a[0];
        for (int i = 0; i < top_a; i++) {
            stack_a[i] = stack_a[i + 1];
        }
        stack_a[top_a] = temp;
    }
}

// Function to reverse rotate stack b
void rrb() {
    if (top_b >= 1) {
        int temp = stack_b[0];
        for (int i = 0; i < top_b; i++) {
            stack_b[i] = stack_b[i + 1];
        }
        stack_b[top_b] = temp;
    }
}

// Function to perform 'ss' operation
void ss() {
    sa();
    sb();
}

// Function to perform 'rr' operation
void rr() {
    ra();
    rb();
}

// Function to perform 'rrr' operation
void rrr() {
    rra();
    rrb();
}

// Function to print the contents of stack a
void print_stack_a() {
    printf("Stack A: ");
    for (int i = 0; i <= top_a; i++) {
        printf("%d ", stack_a[i]);
    }
    printf("\n");
}

// Function to print the contents of stack b
void print_stack_b() {
    printf("Stack B: ");
    for (int i = 0; i <= top_b; i++) {
        printf("%d ", stack_b[i]);
    }
    printf("\n");
}

int main() {
    // Initialize stack a with random elements (for demonstration purposes)
    push_a(3);
    push_a(1);
    push_a(5);
    push_a(2);

    // Sort stack a in ascending order
    // You can use the provided operations here
    // For example, to swap the top two elements of stack a, you can call sa().

    // Print the sorted stack a
    print_stack_a();

    return 0;
}
