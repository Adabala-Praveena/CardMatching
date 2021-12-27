//
//  PlayingCard.h
//  matchismo
//
//  Created by Praveena on 20/08/18.
//  Copyright © 2018 Praveena. All rights reserved.
//

#ifndef PlayingCard_h
#define PlayingCard_h


#endif /* PlayingCard_h */
#import<Foundation/Foundation.h>
#import "Card.h"
@interface PlayingCard : Card
@property (strong,nonatomic) NSString * suit;
@property (nonatomic) NSUInteger rank;
+ (NSArray *) valid_ranks;
+ (NSArray *) valid_suits;
@end

