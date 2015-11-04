//
//  FactBook.h
//  FunFacts
//
//  Created by Julien Chien on 11/3/15.
//  Copyright (c) 2015 Wholiean. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *) randomFact;

@end
