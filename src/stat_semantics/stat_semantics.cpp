#include "stat_semantics/include/stat_semantics.hpp"
#include "stat_semantics/include/Stack.hpp"

static void traverse_preorder(Node* node, Stack stack);
static void process_node(Node* node, Stack stack);
static void postprocess_node(Node* node, Stack stack);

bool verify_semantics(Node* root)
{
    Stack stack = Stack();
    traverse_preorder(root, stack);
    return true;
}

static void traverse_preorder(Node* node, Stack stack)
{
    if (node == NULL) 
        return;

    process_node(node, stack);

    if (node->children.size() > 0)
    {
        for (auto child: node->children) 
            traverse_preorder(child, stack);
    }
    
    postprocess_node(node, stack);
    
    return;
}

static void process_node(Node* node, Stack stack)
{
    int var_cnt;
    
    if (node->label == "block")
        var_cnt = 0;

    if (node->label == "vars")
    {
        for (auto tk: node->tokens)
        {
            if (tk.type == IDENTIFIER_TK)
                stack.push(tk);
        }
    }
}

static void postprocess_node(Node* node, Stack stack)
{
    // post process node
    if (node->label == "block")
        // pop stack
        return;
}