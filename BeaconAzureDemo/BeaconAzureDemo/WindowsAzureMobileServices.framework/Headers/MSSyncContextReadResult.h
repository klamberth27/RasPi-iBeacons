// ----------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// ----------------------------------------------------------------------------

#import <Foundation/Foundation.h>

/// The *MSSyncContextReadResult* class represents the results of a read from a
/// local table. Providing the list of items found and optionally a total count of
/// records matching the query.
@interface MSSyncContextReadResult : NSObject

/// @name Initializing the MSSyncContextReadResult Object
/// @{

/// Creates a MSSyncContextReadResult with the given items and total count.
- initWithCount:(NSInteger)count items:(NSArray *)items;

/// @}

///@name Accessing search results
///@{

/// The total record count of the matching records in the table, but does not indicate the
/// actual returned record count. If the query did not request a total count, this value should
/// be -1.
@property (nonatomic, readonly) NSInteger totalCount;

/// An NSArray of NSDictionaries, with each dictionary representing a row
/// in the table.
@property (nonatomic, readonly, strong) NSArray *items;

/// @}

@end
