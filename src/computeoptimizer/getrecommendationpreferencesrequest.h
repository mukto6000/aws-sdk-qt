// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONPREFERENCESREQUEST_H
#define QTAWS_GETRECOMMENDATIONPREFERENCESREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetRecommendationPreferencesRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetRecommendationPreferencesRequest : public ComputeOptimizerRequest {

public:
    GetRecommendationPreferencesRequest(const GetRecommendationPreferencesRequest &other);
    GetRecommendationPreferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommendationPreferencesRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
