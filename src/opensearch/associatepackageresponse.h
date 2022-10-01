// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPACKAGERESPONSE_H
#define QTAWS_ASSOCIATEPACKAGERESPONSE_H

#include "opensearchresponse.h"
#include "associatepackagerequest.h"

namespace QtAws {
namespace OpenSearch {

class AssociatePackageResponsePrivate;

class QTAWSOPENSEARCH_EXPORT AssociatePackageResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    AssociatePackageResponse(const AssociatePackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociatePackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePackageResponse)
    Q_DISABLE_COPY(AssociatePackageResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
