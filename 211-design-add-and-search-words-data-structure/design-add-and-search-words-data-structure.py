class TrieNode:
    def __init__(self):
        self.word_ends = False
        self.children = {}

class WordDictionary:
    def __init__(self):
        self.root = TrieNode()

    def addWord(self, word: str) -> None:
        node = self.root
        for ch in word:
            if ch not in node.children:
                node.children[ch] = TrieNode()
            node = node.children[ch]
        node.word_ends = True

    def search(self, word: str) -> bool:
        nodes = [self.root]
        for ch in word:
            next_nodes = []
            for node in nodes:
                if ch in node.children:
                    next_nodes.append(node.children[ch])
                if ch == '.':
                    next_nodes.extend(node.children.values())
            nodes = next_nodes
        
        for node in nodes:
            if node.word_ends:
                return True
        
        return False

# Your WordDictionary object will be instantiated and called as such:
# obj = WordDictionary()
# obj.addWord(word)
# param_2 = obj.search(word)