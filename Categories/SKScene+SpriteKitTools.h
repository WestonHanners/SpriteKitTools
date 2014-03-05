//
//  SKScene+SpriteKitTools.h
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SKScene (SpriteKitTools)

- (void)skt_initDefaultFramePhysics;

    /// Geometry Methods
- (CGPoint)skt_center;
- (CGFloat)skt_right;
- (CGFloat)skt_left;
- (CGFloat)skt_top;
- (CGFloat)skt_bottom;

@end
