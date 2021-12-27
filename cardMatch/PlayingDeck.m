//
//  PlayingDeck.m
//  matchismo
//
//  Created by Praveena on 20/08/18.
//  Copyright © 2018 Praveena. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PlayingDeck.h"
#import "PlayingCard.h"
@implementation PlayingDeck
-(instancetype)init
{
    self = [super init ];
    if(self)
    {
        for(NSString * suit in [PlayingCard valid_suits])
        {
            for(NSUInteger rank = 1;rank<=13;rank++)
            {
                PlayingCard * card = [[PlayingCard alloc] init];
                card.rank = rank;
                card.suit = suit;
                [self addCard : card ];
            }
        }
    }
    
    return self;
}
@end

