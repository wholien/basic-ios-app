//
//  ColorWheel.h
//  FunFacts
//
//  Created by Julien Chien on 11/3/15.
//  Copyright (c) 2015 Wholiean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *) randomColor;
@end
