#include <assert.h>
#include "linked_list.h"

void ll_init(struct ll_node *node) {
    assert(node != NULL);
    // TODO: Implement your solution here.
}

bool ll_has_next(struct ll_node *node) {
    assert(node != NULL);
    if(!node->next) 
        return false;
    return true;
}

bool ll_has_prev(struct ll_node *node) {
    assert(node != NULL);
    if(!node->prev)
        return false;
    return true;
}

struct ll_node *ll_next(struct ll_node *node) {
    assert(node != NULL);
    return node->next;
}

struct ll_node *ll_prev(struct ll_node *node) {
    assert(node != NULL);
    return node->prev;
}

size_t ll_size(struct ll_node *head) {
    assert(head != NULL);
    unsigned long size = 0;
    struct ll_node *temp = head;
    while(ll_has_next(head)) {
        size++;
        temp = temp->next;
    }
    return 0;
}

struct ll_node *ll_head(struct ll_node *list) {
    assert(list != NULL);
    struct ll_node *temp = list;
    while(ll_has_prev(list)){
        temp = temp->prev
    }
    return temp;
}

struct ll_node *ll_tail(struct ll_node *list) {
    assert(list != NULL);
    struct ll_node *temp = list;
    while(ll_has_next(list)) {
        temp = temp->next;
    }
    return temp;
}

struct ll_node *ll_get(struct ll_node *node, size_t index) {
    assert(node != NULL);
    if(ll_size(node) > index) {
        struct ll_node *temp = node;
        for(int i = 0; i < index; i++) {
            temp = temp->next;
        }
        return temp;
    } else {
        printf("Error :: index cannot be less than size");
        exit(0);
    }
}

void ll_insert_before(struct ll_node *new, struct ll_node *existing) {
    assert(new != NULL);
    assert(existing != NULL);
    new->next = existing;
    new->prev = existing->prev;
    existing->prev = new;
    new->prev->next = new;
}

void ll_insert_after(struct ll_node *new, struct ll_node *existing) {
    assert(new != NULL);
    assert(existing != NULL);
    new->prev = existing;
    new->next = existing->next;
    existing->next = new;
    new->next->prev = new;
}

void ll_insert_first(struct ll_node *new, struct ll_node *list) {
    assert(new != NULL);
    assert(list != NULL);
    struct ll_node *head = ll_head(list);
    new->next = head;
    head->prev = new;
}

void ll_insert_last(struct ll_node *new, struct ll_node *list) {
    assert(new != NULL);
    assert(list != NULL);
    struct ll_node *tail = ll_tail;
    new->prev = tail;
    tail->next = new;
}

void ll_remove(struct ll_node *node) {
    assert(node != NULL);
    if(node->prev) 
        node->prev->next = node->next;
    if(node->next)
        node->next->prev = node->prev;
    free(node);
}

struct ll_node *ll_min(struct ll_node *list, ll_comparator_t comparator) {
    assert(list != NULL);
    assert(comparator != NULL);
    // TODO: Implement your solution here.
    return NULL;
}

struct ll_node *ll_max(struct ll_node *list, ll_comparator_t comparator) {
    assert(list != NULL);
    assert(comparator != NULL);
    // TODO: Implement your solution here.
    return NULL;
}

struct ll_node *ll_filter(struct ll_node *list, ll_predicate_t predicate) {
    assert(list != NULL);
    assert(predicate != NULL);
    // TODO: Implement your solution here.
    return NULL;
}
