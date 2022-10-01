// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONVERSIONSREQUEST_H
#define QTAWS_LISTEXTENSIONVERSIONSREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class ListExtensionVersionsRequestPrivate;

class QTAWSGAMESPARKS_EXPORT ListExtensionVersionsRequest : public GameSparksRequest {

public:
    ListExtensionVersionsRequest(const ListExtensionVersionsRequest &other);
    ListExtensionVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExtensionVersionsRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
