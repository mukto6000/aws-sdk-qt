// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSECURITYPROFILESRESPONSE_H
#define QTAWS_SEARCHSECURITYPROFILESRESPONSE_H

#include "connectresponse.h"
#include "searchsecurityprofilesrequest.h"

namespace QtAws {
namespace Connect {

class SearchSecurityProfilesResponsePrivate;

class QTAWSCONNECT_EXPORT SearchSecurityProfilesResponse : public ConnectResponse {
    Q_OBJECT

public:
    SearchSecurityProfilesResponse(const SearchSecurityProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchSecurityProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSecurityProfilesResponse)
    Q_DISABLE_COPY(SearchSecurityProfilesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
