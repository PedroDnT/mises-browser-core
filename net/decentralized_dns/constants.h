/* Copyright (c) 2021 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_NET_DECENTRALIZED_DNS_CONSTANTS_H_
#define BRAVE_NET_DECENTRALIZED_DNS_CONSTANTS_H_

namespace decentralized_dns {

constexpr const char* kUnstoppableDomains[] = {
    ".888",
    ".bitcoin", ".blockchain",
    ".crypto",
    ".dao", ".hi", ".klever",
    ".nft", ".wallet", ".x", ".zil",
};

constexpr char kBitDomain[] = ".bit";

constexpr char kEthDomain[] = ".eth";
constexpr char kDNSForEthDomain[] = ".eth.link";

}  // namespace decentralized_dns

#endif  // BRAVE_NET_DECENTRALIZED_DNS_CONSTANTS_H_
