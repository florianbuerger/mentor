//
//  Mentor.h
//  Mentor
//
//  Created by Florian Bürger on 20/05/15.
//  Copyright (c) 2015 Florian Buerger. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface Mentor : NSObject

+ (instancetype)sharedPlugin;

@property (nonatomic, strong, readonly) NSBundle* bundle;
@end