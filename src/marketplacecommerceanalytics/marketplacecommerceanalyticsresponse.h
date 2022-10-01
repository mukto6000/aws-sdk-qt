// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECOMMERCEANALYTICSRESPONSE_H
#define QTAWS_MARKETPLACECOMMERCEANALYTICSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmarketplacecommerceanalyticsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class MarketplaceCommerceAnalyticsResponsePrivate;

class QTAWSMARKETPLACECOMMERCEANALYTICS_EXPORT MarketplaceCommerceAnalyticsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MarketplaceCommerceAnalyticsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MarketplaceCommerceAnalyticsResponse(MarketplaceCommerceAnalyticsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MarketplaceCommerceAnalyticsResponse)
    Q_DISABLE_COPY(MarketplaceCommerceAnalyticsResponse)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
