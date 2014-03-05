//
//  SpriteKitToolsFunctions.h
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import <UIKit/UIKit.h>

    /// Adds pointA to pointB
CGPoint skt_CGPointAdd(CGPoint pointA, CGPoint pointB) {
    CGPoint newPoint = CGPointMake(pointA.x + pointB.x,
                                   pointA.y + pointB.y);
    return newPoint;
}

    /// Multiplies pointA by pointB
CGPoint skt_CGPointMultiply(CGPoint pointA, CGPoint pointB) {
    CGPoint newPoint = CGPointMake(pointA.x * pointB.x,
                                   pointA.y * pointB.y);
    return newPoint;
}
}