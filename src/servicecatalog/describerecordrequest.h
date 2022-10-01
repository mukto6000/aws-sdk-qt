// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECORDREQUEST_H
#define QTAWS_DESCRIBERECORDREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeRecordRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeRecordRequest : public ServiceCatalogRequest {

public:
    DescribeRecordRequest(const DescribeRecordRequest &other);
    DescribeRecordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecordRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
