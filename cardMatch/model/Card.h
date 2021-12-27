//
//  Card.h
//  matchismo
//
//  Created by Praveena on 20/08/18.
//  Copyright © 2018 Praveena. All rights reserved.
//

#ifndef Card_h
#define Card_h


#endif /* Card_h */
#import <Foundation/Foundation.h>
@interface Card : NSObject

@property (strong,nonatomic) NSString * contents;
@property (nonatomic,getter = isChosen) BOOL chosen;
@property (nonatomic,getter = isMatched) BOOL matched;
- (NSInteger) matched : (NSArray *) cards;


@end


