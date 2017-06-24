"""
Usage of:
    nametuple
    special methods like __len__, __getitem__
    random.choice
"""
import collections
import util
util.init_logger()
Card = collections.namedtuple('Card', ['rank', 'suit'])

class FrenchDeck:
    ranks = range(2, 11) + list("JQKA")
    suits = 'spade diamond heart club'.split()
    
    def __init__(self):
        self.cards = [Card(r, s) for r in self.ranks for s in self.suits]
        
    @util.dec.print_calling_in_short
    def __len__(self):
        return len(self.cards);
    
    @ util.dec.print_calling_in_short
    def __getitem__(self, position):
        return self.cards[position];
    
cards = FrenchDeck()
print len(cards)
print cards[0]

import random
print random.choice(cards)

for card in cards:
    print card
    