//
//  Mocktail.h
//  Mocktail
//
//  Created by Jim Puls on 2/7/13.
//  Licensed to Square, Inc. under one or more contributor license agreements.
//  See the LICENSE file distributed with this work for the terms under
//  which Square, Inc. licenses this file to you.

#import <Foundation/Foundation.h>


@interface Mocktail : NSURLProtocol

+ (void)startWithContentsOfDirectoryAtURL:(NSURL *)url;

@end
