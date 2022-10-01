// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMEVERSIONSREQUEST_H
#define QTAWS_LISTTHEMEVERSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListThemeVersionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListThemeVersionsRequest : public QuickSightRequest {

public:
    ListThemeVersionsRequest(const ListThemeVersionsRequest &other);
    ListThemeVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThemeVersionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
