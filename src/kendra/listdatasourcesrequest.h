// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESREQUEST_H
#define QTAWS_LISTDATASOURCESREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class ListDataSourcesRequestPrivate;

class QTAWSKENDRA_EXPORT ListDataSourcesRequest : public KendraRequest {

public:
    ListDataSourcesRequest(const ListDataSourcesRequest &other);
    ListDataSourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSourcesRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
