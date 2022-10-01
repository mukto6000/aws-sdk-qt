// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHAVAILABLEPHONENUMBERSREQUEST_P_H
#define QTAWS_SEARCHAVAILABLEPHONENUMBERSREQUEST_P_H

#include "connectrequest_p.h"
#include "searchavailablephonenumbersrequest.h"

namespace QtAws {
namespace Connect {

class SearchAvailablePhoneNumbersRequest;

class SearchAvailablePhoneNumbersRequestPrivate : public ConnectRequestPrivate {

public:
    SearchAvailablePhoneNumbersRequestPrivate(const ConnectRequest::Action action,
                                   SearchAvailablePhoneNumbersRequest * const q);
    SearchAvailablePhoneNumbersRequestPrivate(const SearchAvailablePhoneNumbersRequestPrivate &other,
                                   SearchAvailablePhoneNumbersRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchAvailablePhoneNumbersRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
