// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCOMPILATIONJOBREQUEST_P_H
#define QTAWS_STOPCOMPILATIONJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "stopcompilationjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopCompilationJobRequest;

class StopCompilationJobRequestPrivate : public SageMakerRequestPrivate {

public:
    StopCompilationJobRequestPrivate(const SageMakerRequest::Action action,
                                   StopCompilationJobRequest * const q);
    StopCompilationJobRequestPrivate(const StopCompilationJobRequestPrivate &other,
                                   StopCompilationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopCompilationJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
