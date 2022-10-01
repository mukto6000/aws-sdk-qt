// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELBIASJOBDEFINITIONSREQUEST_H
#define QTAWS_LISTMODELBIASJOBDEFINITIONSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelBiasJobDefinitionsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListModelBiasJobDefinitionsRequest : public SageMakerRequest {

public:
    ListModelBiasJobDefinitionsRequest(const ListModelBiasJobDefinitionsRequest &other);
    ListModelBiasJobDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelBiasJobDefinitionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
