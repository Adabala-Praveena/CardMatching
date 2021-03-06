//
//  cardMatchingGame.h
//  matchismo
//
//  Created by Praveena on 23/08/18.
//  Copyright © 2018 Praveena. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
@interface cardMatchingGame : NSObject
- (instancetype) initWithCardCount : (NSUInteger) count  usingDeck : (Deck *) deck;
-(long) chooseCardAtIndex : (NSUInteger) index matchMode : (NSInteger) mode;
-(Card*) cardAtIndex : (NSUInteger) index;
@property(nonatomic,readonly) NSInteger score;
-(BOOL) isGameOverFromDeck;
-(BOOL) addExtraCardsToGame;
@property (nonatomic) NSUInteger countOfUnmatchedCards;

@end

