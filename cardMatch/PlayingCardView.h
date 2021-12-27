//
//  PlayingCardView.h
//  cardMatch
//
//  Created by Praveena on 12/09/18.
//  Copyright © 2018 Praveena. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CardView.h"
@interface PlayingCardView : CardView
@property(nonatomic) NSInteger rank;
@property(strong,nonatomic) NSString * suit;
@end
