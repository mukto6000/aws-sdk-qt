// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERINPUTSCHEMAREQUEST_H
#define QTAWS_DISCOVERINPUTSCHEMAREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DiscoverInputSchemaRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DiscoverInputSchemaRequest : public KinesisAnalyticsV2Request {

public:
    DiscoverInputSchemaRequest(const DiscoverInputSchemaRequest &other);
    DiscoverInputSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DiscoverInputSchemaRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
