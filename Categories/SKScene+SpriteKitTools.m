//
//  SKScene+SpriteKitTools.m
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import "SKScene+SpriteKitTools.h"

@implementation SKScene (SpriteKitTools)

- (void)skt_initDefaultFramePhysics {
    
    SKPhysicsBody *framePhysics = [SKPhysicsBody bodyWithEdgeLoopFromRect:self.frame];
    
    [self setPhysicsBody:framePhysics];
    
}

@end
