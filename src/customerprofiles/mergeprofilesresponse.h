// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPROFILESRESPONSE_H
#define QTAWS_MERGEPROFILESRESPONSE_H

#include "customerprofilesresponse.h"
#include "mergeprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class MergeProfilesResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT MergeProfilesResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    MergeProfilesResponse(const MergeProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MergeProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeProfilesResponse)
    Q_DISABLE_COPY(MergeProfilesResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
