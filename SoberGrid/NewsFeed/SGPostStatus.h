//
//  SGPostStatus.h
//  SoberGrid
//
//  Created by Haresh Kalyani on 10/9/14.
//  Copyright (c) 2014 Accucode Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGPost.h"
#import "User.h"
@interface SGPostStatus : SGPost <NSCopying>
@property (nonatomic,strong)NSString        *strStatus;

- (id)initWithDictionary:(NSDictionary*)dict;
@end
