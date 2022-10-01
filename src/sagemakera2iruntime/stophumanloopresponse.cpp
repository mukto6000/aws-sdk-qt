// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stophumanloopresponse.h"
#include "stophumanloopresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMakerA2IRuntime {

/*!
 * \class QtAws::SageMakerA2IRuntime::StopHumanLoopResponse
 * \brief The StopHumanLoopResponse class provides an interace for SageMakerA2IRuntime StopHumanLoop responses.
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 *
 *  Amazon Augmented AI (Amazon A2I) adds the benefit of human judgment to any machine learning application. When an AI
 *  application can't evaluate data with a high degree of confidence, human reviewers can take over. This human review is
 *  called a human review workflow. To create and start a human review workflow, you need three resources: a <i>worker task
 *  template</i>, a <i>flow definition</i>, and a <i>human
 * 
 *  loop</i>>
 * 
 *  For information about these resources and prerequisites for using Amazon A2I, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-getting-started.html">Get Started with Amazon Augmented AI</a>
 *  in the Amazon SageMaker Developer
 * 
 *  Guide>
 * 
 *  This API reference includes information about API actions and data types that you can use to interact with Amazon A2I
 *  programmatically. Use this guide
 * 
 *  to> <ul> <li>
 * 
 *  Start a human loop with the <code>StartHumanLoop</code> operation when using Amazon A2I with a <i>custom task type</i>.
 *  To learn more about the difference between custom and built-in task types, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-task-types-general.html">Use Task Types </a>. To learn how to
 *  start a human loop using this API, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-start-human-loop.html#a2i-instructions-starthumanloop">Create
 *  and Start a Human Loop for a Custom Task Type </a> in the Amazon SageMaker Developer
 * 
 *  Guide> </li> <li>
 * 
 *  Manage your human loops. You can list all human loops that you have created, describe individual human loops, and stop
 *  and delete human loops. To learn more, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-monitor-humanloop-results.html">Monitor and Manage Your Human
 *  Loop </a> in the Amazon SageMaker Developer
 * 
 *  Guide> </li> </ul>
 * 
 *  Amazon A2I integrates APIs from various AWS services to create and start human review workflows for those services. To
 *  learn how Amazon A2I uses these APIs, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-api-references.html">Use APIs in Amazon A2I</a> in the Amazon
 *  SageMaker Developer
 *
 * \sa SageMakerA2IRuntimeClient::stopHumanLoop
 */

/*!
 * Constructs a StopHumanLoopResponse object for \a reply to \a request, with parent \a parent.
 */
StopHumanLoopResponse::StopHumanLoopResponse(
        const StopHumanLoopRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerA2IRuntimeResponse(new StopHumanLoopResponsePrivate(this), parent)
{
    setRequest(new StopHumanLoopRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopHumanLoopRequest * StopHumanLoopResponse::request() const
{
    Q_D(const StopHumanLoopResponse);
    return static_cast<const StopHumanLoopRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMakerA2IRuntime StopHumanLoop \a response.
 */
void StopHumanLoopResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopHumanLoopResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMakerA2IRuntime::StopHumanLoopResponsePrivate
 * \brief The StopHumanLoopResponsePrivate class provides private implementation for StopHumanLoopResponse.
 * \internal
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 */

/*!
 * Constructs a StopHumanLoopResponsePrivate object with public implementation \a q.
 */
StopHumanLoopResponsePrivate::StopHumanLoopResponsePrivate(
    StopHumanLoopResponse * const q) : SageMakerA2IRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a SageMakerA2IRuntime StopHumanLoop response element from \a xml.
 */
void StopHumanLoopResponsePrivate::parseStopHumanLoopResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopHumanLoopResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMakerA2IRuntime
} // namespace QtAws
