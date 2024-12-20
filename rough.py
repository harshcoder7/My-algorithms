from collections import deque

# Node class definition
class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

# Depth-first search to calculate pairs of nodes
def dfs(root, distance):
    global result
    if root is None:
        return [0] * (distance + 1)

    if root.left is None and root.right is None:
        res = [0] * (distance + 1)
        res[1] = 1
        return res

    left = dfs(root.left, distance)
    right = dfs(root.right, distance)

    res = [0] * (distance + 1)

    for i in range(len(res) - 2, 0, -1):
        res[i + 1] = left[i] + right[i]

    for l in range(1, len(left)):
        for r in range(1, len(right)):
            if l + r <= distance:
                result += left[l] * right[r]

    return res

# Function to build a binary tree from level order input
def build_tree(level_order):
    if not level_order or level_order[0] == -1:
        return None

    root = Node(level_order[0])
    queue = deque([root])
    i = 1

    while i < len(level_order):
        current = queue.popleft()

        if i < len(level_order) and level_order[i] != -1:
            current.left = Node(level_order[i])
            queue.append(current.left)
        i += 1

        if i < len(level_order) and level_order[i] != -1:
            current.right = Node(level_order[i])
            queue.append(current.right)
        i += 1

    return root

# Main execution block
if __name__ == "__main__":
    # Input values
    K = 4  # Distance K
    n = 3  # Number of levels
    level_order = [
        4,
        2,
        3, 4,
        5, 6, 7, 8,
        9, -1, 10, 11, -1, -1, -1, 12
    ]

    # Global result variable
    global result
    result = 0

    # Build the binary tree and calculate result
    root = build_tree(level_order)
    dfs(root, K)
    print(result)
