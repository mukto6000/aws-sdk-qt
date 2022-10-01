// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOLUMNSTATISTICSFORPARTITIONREQUEST_H
#define QTAWS_GETCOLUMNSTATISTICSFORPARTITIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetColumnStatisticsForPartitionRequestPrivate;

class QTAWSGLUE_EXPORT GetColumnStatisticsForPartitionRequest : public GlueRequest {

public:
    GetColumnStatisticsForPartitionRequest(const GetColumnStatisticsForPartitionRequest &other);
    GetColumnStatisticsForPartitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetColumnStatisticsForPartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
