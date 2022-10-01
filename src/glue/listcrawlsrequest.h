// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRAWLSREQUEST_H
#define QTAWS_LISTCRAWLSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class ListCrawlsRequestPrivate;

class QTAWSGLUE_EXPORT ListCrawlsRequest : public GlueRequest {

public:
    ListCrawlsRequest(const ListCrawlsRequest &other);
    ListCrawlsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCrawlsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
